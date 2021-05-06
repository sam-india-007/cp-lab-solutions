from fpdf import FPDF
  

pdf = FPDF()
pdf.add_page()        
pdf.set_font("Arial", size = 15)
pdf.rect(5, 5, 200, 287, 'D')

pdf.image('media/college.png', 60, 10, w = 100, h = 53)

pdf.cell(200, 10, txt = " ", 
        ln = 1, align = 'C') 
pdf.cell(200, 10, txt = " ", 
        ln = 1, align = 'C') 
pdf.cell(200, 10, txt = " ", 
        ln = 1, align = 'C') 
pdf.cell(200, 10, txt = " ", 
        ln = 1, align = 'C')
pdf.cell(200, 10, txt = " ", 
        ln = 1, align = 'C')
pdf.cell(200, 10, txt = " ", 
        ln = 1, align = 'C')
pdf.cell(200, 10, txt = " ", 
        ln = 1, align = 'C')




pdf.cell(200, 10, txt = "Chutiya College, Chutiya Admin", 
        ln = 1, align = 'C')        
pdf.cell(200, 10, txt = "Online Degree",
        ln = 2, align = 'C')
pdf.cell(200, 10, txt = "     ",
        ln = 3, align = 'C')
top = pdf.y
offset = pdf.x + 90
pdf.multi_cell(90, 10, "Degree Number: ", 1, 0)
pdf.y = top
pdf.x = offset 
pdf.multi_cell(90, 10, "6969", 1, 0)
top = pdf.y
offset = pdf.x + 90
pdf.multi_cell(90, 10, "Name: ", 1, 0)
pdf.y = top
pdf.x = offset 
pdf.multi_cell(90, 10, "Chutiya Kata", 1, 0)
top = pdf.y
offset = pdf.x + 90
pdf.multi_cell(90, 10, "ID: ", 1, 0)
pdf.y = top
pdf.x = offset 
pdf.multi_cell(90, 10, "2020batchnevergotfest", 1, 0)
top = pdf.y
offset = pdf.x + 90
pdf.multi_cell(90, 10, "Branch: ", 1, 0)
pdf.y = top
pdf.x = offset 
pdf.multi_cell(90, 10, 'Whatsapp Sciences with Sticker Sharing', 1, 0)
top = pdf.y
offset = pdf.x + 90
pdf.multi_cell(90, 10, "CG: ", 1, 0)
pdf.y = top
pdf.x = offset 
pdf.multi_cell(90, 10, 'PASS (coz everyone cheated)', 1, 0)
top = pdf.y
offset = pdf.x + 90
pdf.multi_cell(90, 10, "Achievements: ", 1, 0)
pdf.y = top
pdf.x = offset 
pdf.multi_cell(90, 10, "Stress, Depression, Eye Strain, Lessened Will to Live", 1, 0)
top = pdf.y
offset = pdf.x + 90
pdf.multi_cell(90, 10, "Year", 1, 0)
pdf.y = top
pdf.x = offset 
pdf.multi_cell(90, 10, "2024", 1, 0)

pdf.output("degree.pdf") 